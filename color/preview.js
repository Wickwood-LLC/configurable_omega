
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('#preview #preview-logo img').attr('src', Drupal.settings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off. 
      if (Drupal.settings.color.logo == null) {
        $('div').remove('#preview-logo');
      }

      // Solid background.
      $('#preview', form).css('backgroundColor', $('#palette input[name="palette[bg]"]', form).val());

      // Header.
      $('#preview #preview-header', form).css('background-color', $('#palette input[name="palette[header]"]', form).val());

      // Site name.
      $('#preview #preview-site-name', form).css('color', $('#palette input[name="palette[sitetitle]"]', form).val());
      // Slogan.
      $('#preview #preview-slogan', form).css('color', $('#palette input[name="palette[slogan]"]', form).val());

      // Content Background.
      $('#preview #preview-main', form).css('background-color', $('#palette input[name="palette[content]"]', form).val());

      // Text preview.
      $('#preview #preview-header a', form).css('color', $('#palette input[name="palette[accent]"]', form).val());
      $('#preview #preview-main h2, #preview .preview-content', form).css('color', $('#palette input[name="palette[text]"]', form).val());
      $('#preview #preview-content a', form).css('color', $('#palette input[name="palette[highlight]"]', form).val());
      $('#preview #preview-content a', form).hover(function(){
        $(this).css('color', $('#palette input[name="palette[linkhover]"]', form).val());
      });

      // Second color.
      $('#preview #preview-footer-wrapper', form).css('background-color', $('#palette input[name="palette[footer]"]', form).val());
    }
  };
})(jQuery);
